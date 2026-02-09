# Auto-Update Downstream Repositories

This repository provides automatic submodule update notifications for downstream projects.

## For Downstream Repository Maintainers

To automatically receive updates when `dummy-lib` is updated, add the workflow from [DOWNSTREAM_TEMPLATE.yaml](.github/workflows/DOWNSTREAM_TEMPLATE.yaml) to your repository.

### Setup Instructions:

1. **Copy the template workflow** to your repository at:
   ```
   .github/workflows/auto-update-dummy-lib.yaml
   ```

2. **Update the submodule path** in the workflow file (line 29):
   ```yaml
   git submodule update --remote --merge path/to/dummy-lib
   ```
   Replace `path/to/dummy-lib` with the actual path where you include this submodule.

3. **Commit and push** the workflow file to your repository.

### How It Works:

- The workflow checks for updates **daily at 2 AM UTC**
- You can also trigger it manually from the Actions tab
- When updates are found, it automatically creates a PR
- No configuration needed in the upstream (`dummy-lib`) repository
- Each downstream repo controls its own update schedule

### Benefits:

✅ No need to track downstream repositories  
✅ Downstream repos opt-in themselves  
✅ Each repo controls when/how they update  
✅ Works with both public and private repos  
✅ No special tokens required (uses default `GITHUB_TOKEN`)

### Manual Trigger:

You can also manually check for updates:
1. Go to Actions tab in your repository
2. Select "Auto-update dummy-lib submodule" workflow
3. Click "Run workflow"
