//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DOCItem, NSArray, NSError, NSString, NSURL, NSUUID;
@protocol DOCServicePopoverTrackerProtocol;

@protocol DOCHostDocumentBrowserViewControllerInterface
- (void)_presentActivityViewControllerForItems:(NSArray *)arg1 withPopoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg2;
- (void)_updateRemoteBarButtonFrames:(NSArray *)arg1 forUUID:(NSArray *)arg2;
- (void)_failedToImportDocumentAtURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)_didImportDocumentAtURL:(NSURL *)arg1 toDestinationItem:(DOCItem *)arg2;
- (void)_didRequestDocumentCreationWithHandler:(void (^)(FPSandboxingURLWrapper *, unsigned long long))arg1;
- (void)_commitDocumentURLPreview:(DOCItem *)arg1;
- (void)_didPickItems:(NSArray *)arg1;
- (void)_didTriggerBarButtonWithUUID:(NSUUID *)arg1;
- (void)_didTriggerActionWithIdentifier:(NSString *)arg1 onItems:(NSArray *)arg2;
@end

