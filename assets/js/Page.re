/*
  Example borrowed from: https://github.com/reasonml-community/reason-react-example/tree/master/src/simple
*/

let component = ReasonReact.statelessComponent("Page");

let handleClick = (_event, _self) => Js.log("clicked!");

let make = (~message, _children) => {
  ...component,
  render: self =>
    <div onClick=(self.handle(handleClick))>
      (ReasonReact.string(message))
    </div>,
};
