public static void public static void main(String[] args) {
	List languageList = new ArrayList();
	languageList.add("C");
	languageList.remove("C++");
	languageList.add("Java");
	languageList.add("Python");
	languageList.remove("Java");

	print(languageList);
}

public static void print(List ObjectList){
	for (Object o : objectList){
		System.out.println(o);
	}
}