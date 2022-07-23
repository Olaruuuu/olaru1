using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ChessApp
{
    public partial class Form1 : Form
    {
        private int TileWidth { get; set; }
        private int TileHeight { get; set; }
        public Form1()
        {
            InitializeComponent();
           
        }

        public void InitializeGame()
        {
            TileWidth = 64;
            TileHeight = 64;

            //Board = new Board();
        }

        public void DrawGame()
        {
            var tileSize = new Size(TileWidth, TileHeight);
            Bitmap bitmap = CreateBoard(tileSize);
            pictureBox1.Image = bitmap;
        }

        public Bitmap CreateBoard(Size tileSize)
        {
            int tileWidth = tileSize.Width;
            int tileHeight = tileSize.Height;

            var bitmap = new Bitmap(tileWidth*8, tileHeight*8);
            using (Graphics graphic = Graphics.FromImage(bitmap))
            {
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        Brush brush = (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0) ? Brushes.Black : Brushes.White;
                        graphic.FillRectangle(brush, new Rectangle(i*tileWidth, j * tileHeight, tileWidth, tileHeight));
                    }
                }
            }
            return bitmap;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            InitializeGame();
            DrawGame();
            
        }
    }
}
