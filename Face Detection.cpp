#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("C:/Users/ranja/Downloads/Photograph_4.jpg");

    cv::CascadeClassifier face_cascade;
    face_cascade.load(cv::samples::findFile(cv::data::haarcascades + "haarcascade_frontalface_default.xml"));

    std::vector<cv::Rect> faces;
    face_cascade.detectMultiScale(image, faces, 1.1, 5, cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

    for (const auto& face : faces) {
        cv::rectangle(image, face, cv::Scalar(0, 255, 0), 2);
    }

    cv::imshow("Face Detection", image);

    cv::imwrite("output.jpg", image);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}