open System
let rec calc floor x target =
    let number = floor + x
    let order = target - x
    if number >= target then
        if (floor % 2) = 0 then
            [order; floor - order + 1]
        else
            [floor - order + 1; order]
    else
        calc (floor + 1) number target
[<EntryPoint>]
let main argv =
    Console.ReadLine() |> int |> calc 1 0 |> List.map string |> String.concat "/" |> Console.Write
    0