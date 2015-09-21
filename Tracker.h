#ifdef TRACKER_EXPORTS
#define TRACKER_API __declspec(dllexport)
#else
#define TRACKER_API __declspec(dllimport)
#endif

extern "C" {
  // Initialize and connect to the eye tracker.
  TRACKER_API bool connect();

  // Disconnect from the eye tracker and cleanup.
  TRACKER_API bool disconnect();

  // Get the last reported gaze coordinates.
  TRACKER_API bool last_position(double *x, double *y);

  // Equivalent to pressing the activation button.
  TRACKER_API bool activate();

  // Equivalent to pressing the panning button.
  TRACKER_API bool panning_step();
}
