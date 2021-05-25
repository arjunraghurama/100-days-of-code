/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

Example:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

 */

class defangingIpAddress_033 {
    public String defangIPaddr(String address) {
        //return address.replace(".","[.]");

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < address.length(); i++) {
            char current = address.charAt(i);
            if (current == '.') {
                result.append("[.]");
            } else {
                result.append(current);
            }
        }
        return result.toString();
    }
}
