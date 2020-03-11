open System
Console.ReadLine().Split ' '
|> Array.map int
|> fun x ->
    if x = [|1 .. 8|] then
        "ascending"
    else if x = ([|1 .. 8|] |> Array.rev) then
        "descending"
    else
        "mixed"
|> Console.Write