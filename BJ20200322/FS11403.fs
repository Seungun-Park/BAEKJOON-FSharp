open System
let n = Console.ReadLine() |> int
let floydwarshall (arr : (int array) array) =
    for k in 0 .. n - 1 do
        for i in 0 .. n - 1 do
            for j in 0 .. n - 1 do
                if arr.[i].[j] = 0 && arr.[i].[k] <> 0 && arr.[k].[j] <> 0 then arr.[i].[j] <- 1
    arr |> Array.map (fun x -> x |> Array.map string |> String.concat " ") |> String.concat "\n"
[<EntryPoint>]
let main argv = 
    [|for _ in 1 .. n do yield Console.ReadLine().Split ' ' |> Array.map int|]
    |> floydwarshall
    |> Console.Write
    0