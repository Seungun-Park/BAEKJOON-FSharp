open System
let score =
    Console.ReadLine() |> int

if score >= 90 then "A"
else if score >= 80 then "B"
else if score >= 70 then "C"
else if score >= 60 then "D"
else "F"
|> Console.Write