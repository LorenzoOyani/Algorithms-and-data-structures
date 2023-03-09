let Student = (function defineStudent() {
  let records = [
    { id: 4, name: "Lorenzo", grade: 85 },
    { id: 4, name: "jane", grade: 85 },
    { id: 4, name: "ayo", grade: 85 },
    { id: 4, name: "john", grade: 85 },
  ];

  let publicAPI = {
    getName,
  };
  return publicAPI;

  function getName(studentId) {
    let student = records.find((student) => student.id === studentId);
    return student;
  }
})();

Student.getName(4);
