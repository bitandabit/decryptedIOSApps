// Only used in QA builds, refer to SPTInAppMessageTriggerMessageViewModel.m
var primaryButton = document.querySelector('[data-click-to-action-id="primaryCta"]');
var legalLink = document.querySelector('[data-click-to-action-id="legalCta"]');
var legal = document.querySelector('.UpsellWebview-legal');
var fullscreenLegal = document.querySelector('.ShowcaseWebview-legal');
var fullscreenDismissButton = document.querySelector('[data-click-to-action-id="dismissCta"]');
var header = document.querySelector('.ShowcaseWebview-heading');
var fullscreenMessage = document.querySelector('.ShowcaseWebview-message');
var message = document.querySelector('.UpsellWebview-message');
var title = document.querySelector('.UpsellWebview-title');

function clickPrimaryButton() {
    var event = new MouseEvent('click', {
                               view: window,
                               bubbles: true,
                               cancelable: true
                               });

    primaryButton.dispatchEvent(event);
}

function clickLegalLink() {
    var event = new MouseEvent('click', {
                               view: window,
                               bubbles: true,
                               cancelable: true
                               });

    legalLink.dispatchEvent(event);
}

function getPrimaryButtonText() {
    return primaryButton.innerText;
}

function getLegalText() {
    return legal.innerText;
}

function getFullscreenLegalText() {
    return fullscreenLegal.innerText;
}

function getHeaderText() {
    return header.innerText;
}

function getFooterText() {
    return dismissButton.innerText;
}

function getInAppMessageTitleText() {
    return title.innerText;
}

function getMessageText() {
    return message.innerText;
}

function getFullscreenMessageText() {
    return fullscreenMessage.innerText;
}

function getFullscreenDismissText() {
    return fullscreenDismissButton.innerText;
}
