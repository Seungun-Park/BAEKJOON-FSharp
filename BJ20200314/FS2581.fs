open System
[<EntryPoint>]
let main argv = 
    let arr : bool array = Array.create 10001 true
    arr.[0] <- false
    arr.[1] <- false
    for i in 2 .. 10000 do
        if arr.[i] then
            for j in (i + i) .. i .. 10000 do
                arr.[j] <- false
    let m = Console.ReadLine() |> int
    let M = Console.ReadLine() |> int
    let ans : int list = [for i in m .. M do yield i] |> List.filter (fun x -> arr.[x]) |> List.map int
    if ans.IsEmpty then
        -1 |> Console.Write
    else
        [ans |> List.sum; ans |> List.head]
        |> List.map string
        |> String.concat "\n"
        |> Console.Write
    0