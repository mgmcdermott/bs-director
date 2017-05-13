type t;

external makeRouter : Js.t {..} => router =
  "Router" [@@bs.module "director/build/director"] [@@bs.new];

external init : t => string => unit = "init" [@@bs.send];
