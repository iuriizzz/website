module Styles = {
  open Css;

  let container =
  merge([
    style([
      position(`absolute),
      left(`px(0)),
      right(`px(0)),
      display(`flex),
      flexDirection(`row),
      justifyContent(`center),
      selector(
        "p",
        [
          fontSize(`rem(1.125)), 
          lineHeight(`rem(1.75)),
          fontWeight(`num(10)),
          marginBottom(`rem(1.)),
        ],
      ),
      selector(
        "h1",
        [
          fontWeight(`num(540)),
          fontSize(`rem(3.)),
          lineHeight(`rem(3.625)),
          marginBottom(`rem(1.)),
          media( Theme.MediaQuery.mobile,
          [
            fontSize(`rem(2.3)),
          ],
        ),
        ],
      ),
      media(
        Theme.MediaQuery.mobile,
        [
          flexDirection(`row),
          width(`percent(100.)),
          justifyContent(`spaceAround),
        ],
      ),
    ]),
  ]);
  
  let vector =
      style([
        margin(`rem(1.)),
      ])

  let background =
    style([
      width(`percent(100.)),
      height(`rem(20.)),
      display(`flex),
      justifyContent(`center),
      alignItems(`center),
      backgroundColor(Theme.Colors.announcementBar),
    ]);

    let column = 
    style([
      Theme.Typeface.monumentGrotesk,
      color(Css_Colors.white),
      maxWidth(`rem(34.)),
    ]);

};

module Section = {
[@react.component]
let make = () => {
  <div className=Styles.background>
    <div className=Styles.container> 
      <div className=Styles.column>
        <img
          src="/static/img/logos/AnnouncementLogo.svg"
          className=Styles.vector
        />
      </div>
      <div className=Styles.column>
        <h1> {React.string("Announcement")} </h1> 
        <p>
          {React.string(
            "Lorum ipsum dolor sit amet. Lorum ipsum dolor sit amet. Lorum ipsum dolor sit amet. Lorum ipsum dolor sit amet. Lorum ipsum dolor sit amet. Lorum ipsum dolor sit amet."
          )}
        </p>
      </div>
    </div>
  </div>
};
};