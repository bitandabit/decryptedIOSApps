//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, SPTDataLoader, SPTUpsellActionFactory;

@protocol SPTUpsellActionFactoryDelegate <NSObject>
- (void)triggerMoreUpsellWithData:(NSData *)arg1;
- (id <SPTAccountProductActivationController>)productActivationControllerForActionFactory:(SPTUpsellActionFactory *)arg1;
- (SPTDataLoader *)callbackDataLoaderForActionFactory:(SPTUpsellActionFactory *)arg1;
@end

