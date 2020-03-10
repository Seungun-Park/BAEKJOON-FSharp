open System
Console.ReadLine().Split()
|> fun x ->
    if x.[0] = "" && x.[x.Length - 1] = "" then
        x.Length - 2
    else if x.[0] = "" || x.[x.Length - 1] = "" then
        x.Length - 1
    else
        x.Length   
|> Console.Write