module Top = {
  module App = {
    include ReactRe.Component;
    let name = "BMI App";
    type props = unit;
    let render _ => <bmi />;
  };
  include ReactRe.CreateComponent App;
  let createElement = wrapProps ();
};

ReactDOMRe.renderToElementWithId <Top /> "index";
