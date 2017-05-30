let rec length l =>
  switch l {
  | [] => 0
  | [h, ...t] => 1 + length t
  };

let rec append a b =>
  switch a {
  | [] => b
  | [h, ...t] => [h, ...append t b]
  };

let rec double l =>
  switch l {
  | [] => []
  | [h, ...t] => [h * 2, ...double t]
  };

let rec evens l =>
  switch l {
  | [] => []
  | [h, ...t] => [h mod 2 == 0, ...evens t]
  };
