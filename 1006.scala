object Main {

    def main(args: Array[String]) {

        var x = scala.io.StdIn.readDouble()
        var y = scala.io.StdIn.readDouble()
        var z = scala.io.StdIn.readDouble()
        x = x * 2 + y * 3 + z * 5
        x /= 10.0
        
        println(f"MEDIA = $x%.1f")
    }

}
