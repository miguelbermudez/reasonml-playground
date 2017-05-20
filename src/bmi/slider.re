module Slider = {
  include ReactRe.Component;
  type props = {value: string, min: int, max: string, onChange: ReactEventRe.Form.t => unit};
  let sliderStyle = ReactDOMRe.Style.make width::"100%" ();
  let name = "Slider";
  let render {props} =>
    <input
      _type="range"
      value=props.value
      min=props.min
      max=props.max
      style=sliderStyle
      onChange=props.onChange
    />;
};

include ReactRe.CreateComponent Slider;

let createElement ::value ::min ::max ::onChange => wrapProps {value, min, max, onChange};
