<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>
        NusaLearning.id
    </title>

    <link href="favicon.png" rel="icon" type="image/png" />

    <!-- link bootstrap -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-sRIl4kxILFvY47J16cr9ZwB07vP4J8+LH7qKQnuqkuIAvNWLzeN8tE5YBujZqJLB" crossorigin="anonymous">
	
	<link href="https://cdn.jsdelivr.net/npm/bootstrap-icons/font/bootstrap-icons.css" rel="stylesheet">
	

    <!-- link FONT -->
    <link rel="stylesheet" href="https://rsms.me/inter/inter.css">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Open+Sans:ital,wght@0,300..800;1,300..800&family=Roboto:ital,wght@0,100..900;1,100..900&display=swap" rel="stylesheet">
    <!-- CSS -->
    <link rel="stylesheet" href="../style.css"> 

</head>
<body class="bg-light">

<!-- NAVBAR -->
		<nav class="navbar navbar-expand-md bg-body-tertiary">
		  <div class="container-fluid">
			<a class="navbar-brand" href="../">
				<img src="../LOGO-NusaLearning.png" alt="Logo_NusaLearning" height="25">
			</a>
			<a class="navbar-toggler" href="" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
			  <span class="navbar-toggler-icon"></span>
			</a>
			<div class="collapse navbar-collapse" id="navbarSupportedContent">
			  <ul class="navbar-nav me-auto mb-2 mb-md-0"
			  
				<li class="nav-item">
				  <a class="nav-link" href="../about">About</a>
				</li>
				
				<li class="nav-item">
				  <a class="nav-link" href="../community">Community</a>
				</li>
			  
				<li class="nav-item dropdown">
				  <a class="nav-link dropdown-toggle" href="" role="button" data-bs-toggle="dropdown" aria-expanded="false">
					Courses
				  </a>
				  <ul class="dropdown-menu">
					<li><a class="dropdown-item" href="../courses">Bisnis Digital</a></li>
					<li><a class="dropdown-item" href="../courses">Rekayasa Perangkat Lunak</a></li>
					<li><hr class="dropdown-divider"></li>
					<li><a class="dropdown-item" href="../courses">See more..</a></li>
				  </ul>
				</li>

				<li class="nav-item">
					<a class="nav-link" href="../help">Help Center</a>
				</li>

			  </ul>
			  
			 <form class="d-flex ms-auto">
				<a class="btn btn-outline-success me-2" href="../signup">Sign Up</a>
				<a class="btn btn-outline-secondary" href="../signin">Sign In</a>
			</form>
			</div>
		  </div>
		</nav> 




    <div class="container py-5">

        <div class="card shadow-sm">
            <div class="card-header bg-primary text-white">
                <h5 class="mb-0">📋 Data Pendaftar (*hanya display / not working)</h5>
            </div>

            <div class="card-body">

                <div class="table-responsive">
                    <table class="table table-bordered table-hover align-middle">
                        <thead class="table-dark">
                            <tr>
                                <th>ID</th>
                                <th>Nama Depan</th>
                                <th>Nama Belakang</th>
                                <th>Email</th>
                                <th>Username</th>
                                <th>Photo</th>
                            </tr>
                        </thead>
                        <tbody id="dataTable">
                            <tr>
                                <td colspan="6" class="text-center text-muted">
                                    Loading data...
                                </td>
                            </tr>
                        </tbody>
                    </table>
                </div>

            </div>
        </div>

    </div>

    <!-- Bootstrap JS (optional, but nice to have) -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"></script>

    <script>
        fetch('flow/get_data.php')
            .then(res => res.json())
            .then(data => {
                const tbody = document.getElementById('dataTable');
                tbody.innerHTML = '';

                if (data.length === 0) {
                    tbody.innerHTML = `
                        <tr>
                            <td colspan="6" class="text-center text-muted">
                                No data found
                            </td>
                        </tr>
                    `;
                    return;
                }

                data.forEach(user => {
                    tbody.innerHTML += `
                        <tr>
                            <td>${user.id}</td>
                            <td>${user.nama_depan}</td>
                            <td>${user.nama_belakang}</td>
                            <td>${user.email}</td>
                            <td>${user.username}</td>
                            <td>
                                ${
                                    user.photo
                                    ? `<img src="uploads/${user.photo}" class="rounded" width="50">`
                                    : `<span class="text-muted">No photo</span>`
                                }
                            </td>
                        </tr>
                    `;
                });
            })
            .catch(err => {
                document.getElementById('dataTable').innerHTML = `
                    <tr>
                        <td colspan="6" class="text-center text-danger">
                            Failed to load data
                        </td>
                    </tr>
                `;
                console.error(err);
            });
    </script>

</body>
</html>
