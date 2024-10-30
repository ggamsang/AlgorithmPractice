const products = {
  SKU12345: { name: "Laptop", price: 999, discount: 0.1 },
  SKU67890: { name: "Phone", price: 499, discount: 0 },
  SKU54321: { name: "Tablet", price: 299, discount: 0.05 },
}

function printFormattedProductDetails(products) {
  for (const product in products) {
    // const { name, price, discount } = product X {product | SKU12345, ... }
    const { name, price, discount } = products[product]

    let finalPrice = price
    if (discount) {
      finalPrice = price - price * discount
    }

    console.log(
      `Product: ${name}, Price: ${finalPrice.toLocaleString("en-US", {
        style: "currency",
        currency: "USD",
      })}`
    )
  }
}

printFormattedProductDetails(products)
