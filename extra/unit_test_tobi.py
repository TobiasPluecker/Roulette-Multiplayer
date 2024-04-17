from fastapi.testclient import TestClient
from roulette_server_fastapi import app


client = TestClient(app)



def test_ob_lobby_richtig_erstellt():
    antwort = client.get(f"{base_url}/lobby")
    