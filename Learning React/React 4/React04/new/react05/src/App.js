// import logo from './logo.svg';
import './App.css';
import React  from 'react';
// import Validation from './Validation';
import Form from './Form';

// const Comp1 = lazy(() => import('./Comp1'));
// const Comp2 = lazy(() => import('./Comp2'));

function App() {
  return (
    <>
     <Form/>
    {/* <Validation/> */}
      {/* <Comp1 />
      <Suspense fallback={<div>Loading....</div>}>
        
        <Comp2 />
      </Suspense> */}
    </>
  );
}

export default App;

