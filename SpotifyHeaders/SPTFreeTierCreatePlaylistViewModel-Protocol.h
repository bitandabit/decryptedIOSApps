//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTFreeTierCreatePlaylistViewModel <NSObject>
@property(readonly, nonatomic) NSString *defaultName;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistViewModelDelegate> delegate;
- (_Bool)allowPlaylistWithName:(NSString *)arg1;
- (void)cancelPlaylistCreation;
- (void)createPlaylistWithName:(NSString *)arg1;
- (void)loadViewModel;
@end
