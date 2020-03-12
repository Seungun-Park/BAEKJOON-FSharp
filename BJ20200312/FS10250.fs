open System
let calc w n =
    let di = n / w
    let mo = n % w
    if mo = 0 then
        w * 100 + di
    else
        mo * 100 + di + 1
[<EntryPoint>]
let main argv = 
    [for _ in 1 .. int(Console.ReadLine()) do yield (Console.ReadLine().Split ' ' |> Array.map int |> fun x -> calc x.[0] x.[2])]
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0