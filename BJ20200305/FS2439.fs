open System
let N = Console.ReadLine() |> int
[for i in 1 .. N -> String.Concat([String(' ', N-i); String('*', i)])]
|> String.concat("\n")
|>Console.Write