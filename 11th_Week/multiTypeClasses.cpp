

template<class pointx, class pointy, class pointz>
class MultiTypePoint {
	public:
		MultiTypePoint(pointx x, pointy y, pointz z) : px(x), py(y), pz(z) {
			cout << "MultiTypePoint object constructor." << endl;
		}

	void printPoint() {
		cout << " X " << px << " Y " << py << " Z " << pz << endl;
	}

private:
	pointx px;
	pointy py;
	pointz pz;
};
