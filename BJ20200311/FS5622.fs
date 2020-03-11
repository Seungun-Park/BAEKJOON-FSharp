open System
let rec dial (cnt:int) str =
    match str with
    | head::tail when 'A' <= head && head <= 'C' -> dial (cnt + 3) tail 
    | head::tail when 'D' <= head && head <= 'F' -> dial (cnt + 4) tail 
    | head::tail when 'G' <= head && head <= 'I' -> dial (cnt + 5) tail 
    | head::tail when 'J' <= head && head <= 'L' -> dial (cnt + 6) tail 
    | head::tail when 'M' <= head && head <= 'O' -> dial (cnt + 7) tail 
    | head::tail when 'P' <= head && head <= 'S' -> dial (cnt + 8) tail 
    | head::tail when 'T' <= head && head <= 'V' -> dial (cnt + 9) tail 
    | head::tail when 'W' <= head && head <= 'Z' -> dial (cnt + 10) tail 
    | [] -> cnt
[<EntryPoint>]
let main argv = 
    Console.ReadLine() |> Seq.toList |> dial 0 |> Console.Write
    0