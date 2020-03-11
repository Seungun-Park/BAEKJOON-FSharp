open System
let alarm h m =
    if h = 0 && m < 45 then
        [23; 60 + m - 45]
    else if m < 45 then
        [h - 1; 60 + m - 45]
    else
        [h; m - 45]
[<EntryPoint>]
let main argv =
    let t = Console.ReadLine().Split ' ' |> Array.map int
    alarm t.[0] t.[1] |> List.map string |> String.concat " " |> Console.Write
    0