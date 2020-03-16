open System
let calc (arr : int array) =
    let distance = (abs(arr.[3] - arr.[0]) * abs(arr.[3] - arr.[0])) + (abs(arr.[4] - arr.[1]) * abs(arr.[4] - arr.[1]))
    let short = if arr.[2] < arr.[5] then arr.[2] else arr.[5]
    let long = if arr.[2] < arr.[5] then arr.[5] else arr.[2]
    if distance = 0 && short = long then
        -1
    else if (long - short) * (long - short) < distance && distance < (long + short) * (long + short) then
        2
    else if distance = (long + short) * (long + short) then
        1
    else if distance = (long - short) * (long - short) && distance <> 0 then
        1
    else
        0
[<EntryPoint>]
let main argv = 
    [for _ in 1 .. (Console.ReadLine() |> int) do yield Console.ReadLine().Split ' ' |> Array.map int |> calc]
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0