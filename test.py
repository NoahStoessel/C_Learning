import requests

# Define the API URL
api_url = "https://discordlookup.mesavirep.xyz/v1/user/854205470435704834"

try:
    # Send a GET request to the API
    response = requests.get(api_url)

    # Check if the request was successful (status code 200)
    if response.status_code == 200:
        # Parse the JSON response
        data = response.json()

        # Access and print the data stored under "global_name"
        if "global_name" in data:
            global_name = data["global_name"]
            print("Global Name:", global_name)
        else:
            print("The 'global_name' field is not found in the JSON data.")
    else:
        print(f"Request failed with status code {response.status_code}")

except requests.exceptions.RequestException as e:
    print(f"Request error: {e}")

except ValueError as e:
    print(f"JSON parsing error: {e}")

