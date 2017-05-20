module BMI = {
  include ReactRe.Component.Stateful;
  let name = "BMI";
  type props = unit;
  type state = {height: string, weight: string, bmi: string};
  let getInitialState _ => {weight: "180", height: "190", bmi: ""};
  let handleSliderChangeHeight {state} e =>
    Some {
      ...state,
      bmi: "",
      height: (ReactDOMRe.domElementToObj (ReactEventRe.Form.target e))##value
    };
  let handleSliderChangeWeight {state} e =>
    Some {
      ...state,
      bmi: "",
      weight: (ReactDOMRe.domElementToObj (ReactEventRe.Form.target e))##value
    };
  let handleSliderChangeBmi {state} e =>
    Some {...state, bmi: (ReactDOMRe.domElementToObj (ReactEventRe.Form.target e))##value};
  let render {state, updater} => {
    let {height, weight, bmi} = state;
    <div>
      <section>
        (ReactRe.stringToElement ("Height " ^ height ^ "cm"))
        <Slider value="height" onChange=(updater handleSliderChangeHeight) min=100 max="220" />
      </section>
    </div>
  };
};

include ReactRe.CreateComponent BMI;

let createElement = wrapProps ();
