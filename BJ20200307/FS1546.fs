open System
let count arr =
    let m:double = Array.max arr
    [for i in 0 .. (arr.Length - 1) do yield ((arr.[i] / m) * 100.0)]
    |> List.average
[<EntryPoint>]
let main argv =
    Console.ReadLine() |> ignore
    Console.ReadLine().Split ' '
    |> Array.map double
    |> count
    |> Console.Write
    0