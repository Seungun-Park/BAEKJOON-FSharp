open System
let subcount str =
    let alp : int array = Array.zeroCreate 26
    let strarr = str |> Seq.toList
    let rec check p s =
        match s with
        | head::tail when head <> p ->
            if alp.[(head |> int) - 97] = 0 then
                alp.[(head |> int) - 97] <- 1
                check head tail
            else
                0
        | head::tail -> check head tail
        | [] -> 1
    check ' ' strarr
let rec count (cnt:int) strlist =
    match strlist with
    | head::tail -> count (cnt + (subcount head)) tail
    | [] -> cnt
[<EntryPoint>]
let main argv =
    [for _ in 1.. int(Console.ReadLine()) do yield Console.ReadLine()]
    |> count 0
    |> Console.Write
    0