import { useState } from 'react'
import logo from './logo.svg'
import './App.css'
import Buton from './buton'
import 'virtual:windi.css'

function App() {
  return (
  <div className="flex-col space-y-16">
    <Buton title = "asd"> orice </Buton> 
    <Buton title = "a"> asdfaw</Buton>
    <Buton title = "a"/>
  </div>)
}

export default App
