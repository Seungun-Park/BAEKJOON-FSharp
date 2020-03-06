open System

let maxNum list =
    let rec search x mi i li =
        match li with
        | head::tail when head > x -> search head i (i + 1) tail
        | head::tail when head < x -> search x mi (i + 1) tail
        | [] -> mi
    let idx = search 0 0 0 list
    [list.[idx]; idx + 1]

[<EntryPoint>]
let main argv =
    [for _ in 1 .. 9 do yield (Console.ReadLine() |> int)]
    |> maxNum
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0