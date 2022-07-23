import { useEffect, useState } from 'react'
import logo from './logo.svg'


type Props = {title?:string}

const Buton:React.FC<Props> = (Props) => {
    
    const [count,setCount] = useState(1)
    const increment = () => {
        setCount(count+1)
    }
    
    useEffect(() => {
        console.log('mounted')
        return console.log('unmounted')
    }, [])

  return (
  <div>
    {count}
    <button onClick={increment} className={"animate-bounce bg-blue-800 rounded hover:bg-red-500 w-20 md:w-[130px] ring-emerald-900"}>{Props.children}</button>    
  </div>)
}

export default Buton
