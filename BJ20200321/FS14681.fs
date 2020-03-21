open System
[<EntryPoint>]
let main argv = 
    [|Console.ReadLine() |> int; Console.ReadLine() |> int|]
    |> fun x ->
        match x with
        | [|x; y|] when x > 0 && y > 0 -> 1
        | [|x; y|] when x < 0 && y > 0 -> 2
        | [|x; y|] when x < 0 && y < 0 -> 3
        | [|x; y|] when x > 0 && y < 0 -> 4
        | _ -> 0
    |> Console.Write
    0