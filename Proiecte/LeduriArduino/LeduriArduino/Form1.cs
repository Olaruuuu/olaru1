using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace LeduriArduino
{
    public partial class Form1 : Form
    {
        SerialPort Port;
        bool isConnected = false;
        String[] ports;

        public Form1()
        {
            InitializeComponent();
            disableControls();
            getAvailableComPorts();

            foreach (string port in ports)
            {
                comboBox1.Items.Add(port);
            }
        }
        public void disableControls()
        {
            checkBox1.Enabled = false;
            checkBox2.Enabled = false;
            checkBox2.Enabled = false;

        }
        public void enableControls()
        {
            checkBox1.Enabled = true;
            checkBox2.Enabled = true;
            checkBox2.Enabled = true;

        }
        public void getAvailableComPorts()
        {
            ports = SerialPort.GetPortNames();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (!isConnected)
            {
                connectToArduino();
            }
            else 
            {
                disconnectFromArduino();
            }
        }

        public void connectToArduino()
        {
            isConnected = true;
            string selectedPort = comboBox1.GetItemText(comboBox1.SelectedItem);
            Port = new SerialPort(selectedPort, 9600, Parity.None, 8, StopBits.One);
            Port.Open();
            Port.Write("#STAR\n");
            button1.Text = "DISCONNECT";
            enableControls();

        }

        private void checkBox1_Click(object sender, EventArgs e)
        {
            if (isConnected)
            {
                if (checkBox1.Checked)
                {
                    Port.Write("#LED1ON\n");
                }
                else 
                {
                    Port.Write("#LED1OFF\n");
                }
            }
        }

        private void checkBox2_Click(object sender, EventArgs e)
        {
            if (isConnected)
            {
                if (checkBox2.Checked)
                {
                    Port.Write("#LED2ON\n");
                }
                else
                {
                    Port.Write("#LED2OFF\n");
                }
            }
        }

        private void checkBox3_Click(object sender, EventArgs e)
        {
            if (isConnected)
            {
                if (checkBox3.Checked)
                {
                    Port.Write("#LED3ON\n");
                }
                else
                {
                    Port.Write("#LED3OFF\n");
                }
            }
        }

        public void disconnectFromArduino()
        {
            isConnected = false;
            Port.Write("#STOP\n");
            Port.Close();
            button1.Text = "CONNECT";
            disableControls();
            //restoreDefaults();
        }
    }
}
