open System
let N = Console.ReadLine() |> int
[for _ in 1 .. N -> Console.ReadLine().Split()]
|> List.map (fun [|x; y|] -> (x |> int) + (y |> int) |> string)
|> String.concat "\n"
|> Console.Write