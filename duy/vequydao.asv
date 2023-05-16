% Nhập tọa độ 4 góc của hình tứ giác
% X1 = input('Nhập tọa độ X của góc 1: ');
% Y1 = input('Nhập tọa độ Y của góc 1: ');
% X2 = input('Nhập tọa độ X của góc 2: ');
% Y2 = input('Nhập tọa độ Y của góc 2: ');
% X3 = input('Nhập tọa độ X của góc 3: ');
% Y3 = input('Nhập tọa độ Y của góc 3: ');
% X4 = input('Nhập tọa độ X của góc 4: ');
% Y4 = input('Nhập tọa độ Y của góc 4: ');

% Tính toạ độ của tất cả các điểm trong hình tứ giác
xMin = min([X1, X2, X3, X4]);
yMin = min([Y1, Y2, Y3, Y4]);
xMax = max([X1, X2, X3, X4]);
yMax = max([Y1, Y2, Y3, Y4]);
[X, Y] = meshgrid(xMin:0.5:xMax, yMin:0.5:yMax);
inQuadrilateral = inpolygon(X, Y, [X1, X2, X3, X4], [Y1, Y2, Y3, Y4]);
xCoords = X(inQuadrilateral);
yCoords = Y(inQuadrilateral);

% Vẽ 4 cạnh của hình tứ giác
plot([X1, X2], [Y1, Y2], 'k-', 'LineWidth', 2);
hold on;
plot([X2, X3], [Y2, Y3], 'k-', 'LineWidth', 2);
plot([X3, X4], [Y3, Y4], 'k-', 'LineWidth', 2);
plot([X4, X1], [Y4, Y1], 'k-', 'LineWidth', 2);

% Vẽ toạ độ của tất cả các điểm trong hình tứ giác
scatter(xCoords, yCoords, '.');
xlabel('X');
ylabel('Y');