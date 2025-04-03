import { createStore, combineReducers, applyMiddleware } from 'redux';
import { thunk } from 'redux-thunk'; // ✅ Correct named import
import { composeWithDevTools } from 'redux-devtools-extension';
import { productListReducer } from './reducers/productsReducers';

const reducer = combineReducers({
    productsList: productListReducer,  // ✅ Ensure this matches useSelector
});

const initialState = {};
const middleware = [thunk]; // ✅ Updated thunk import usage

const store = createStore(
    reducer,
    initialState,
    composeWithDevTools(applyMiddleware(...middleware))
);

export default store;
