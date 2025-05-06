float deliveryCharge(float weight) {
    return weight * 10; // Rs.10 per kg for small packages
}

float deliveryCharge(float weight, float distance) {
    return (weight * 5) + (distance * 2); // weight + distance based for large
}