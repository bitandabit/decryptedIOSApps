//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBVideoAdController, NSError;

@protocol FBVideoAdControllerDelegate <NSObject>
- (void)controllerDidUnload:(FBVideoAdController *)arg1;
- (void)controllerDidClick:(FBVideoAdController *)arg1;
- (void)controller:(FBVideoAdController *)arg1 didFailWithError:(NSError *)arg2;
- (void)controllerDidLoad:(FBVideoAdController *)arg1;

@optional
- (void)controllerWillRegisterViewableImpression:(FBVideoAdController *)arg1;
@end

