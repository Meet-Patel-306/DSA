// Last updated: 04/10/2025, 18:42:30
class Spreadsheet {
public:
    unordered_map<string,int> sheet;
    Spreadsheet(int rows) {
        
    }
    
    void setCell(string cell, int value) {
        sheet[cell] = value;
    }
    
    void resetCell(string cell) {
        sheet[cell] = 0;
    }
    
    int getValue(string formula) {
        string a = "",b = "";
        int i = 1;
        while(formula[i] != '+'){
            a+=formula[i];
            i++;
        }
        i++;
        while(i<formula.length()){
            b+=formula[i];
            i++;
        }
        int sum = 0;
        if(sheet.find(a)==sheet.end()){
            if(all_of(a.begin(), a.end(),::isdigit)) sum+=stoi(a);
            else sum += 0;
        }else{
            sum += sheet[a];
        }
        if(sheet.find(b)==sheet.end()){
            if(all_of(b.begin(), b.end(),::isdigit)) sum+=stoi(b);
            else sum += 0;
        }else{
            sum += sheet[b];
        }
        return sum;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */