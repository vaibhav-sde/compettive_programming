
          



          function Myapp(props){
          		const [inputValue,setInputValue]=useState("");

          		const changeHandler(event)=>{
          				setInputValue(event.target.value);
          		}
          		const handleEnterTime =()=>{
          			console.log(inputValue);
          		}
          		return(<>

          			Enter countdown time:
			          <div>
			          		<input id="timeCount" onChange={changeHandler} />
			          </div>
			        </h1>
			        <button id="button" value='' name="start" onClick={handleEnterTime}>
			          Start
			        </button>

          			</>)
          }