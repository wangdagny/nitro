from contextlib import suppress
from threading import Event


def main() -> None:
    print("Ingest is ready. Press Ctrl+C to stop.", flush=True)
    with suppress(KeyboardInterrupt):
        Event().wait()


if __name__ == "__main__":
    main()
