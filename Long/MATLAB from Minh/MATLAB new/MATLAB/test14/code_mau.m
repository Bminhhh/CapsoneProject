hold on
grid on


result = final.Data


plot(out.final,'LineWidth', 4)
plot(final.Times, result, '-g', 'LineWidth', 4)

hold off
grid off


x1 = label('Time (s)', 'FontSize', 12, 'FontName', 'Times New Roman', 'FontWeight', 'Bold')
y1 = label('Total Resistance Torque', 'FontSize', 12, 'FontName', 'Times New Roman', 'FontWeight', 'Bold')



