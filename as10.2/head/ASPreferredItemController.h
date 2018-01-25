//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASPreferredItemControllerProtocol-Protocol.h"
#import "SKUIItemStateCenterObserver-Protocol.h"

@class NSMapTable, NSString;
@protocol ASPreferredItemControllerDelegate, OS_dispatch_queue;

@interface ASPreferredItemController : NSObject <SKUIItemStateCenterObserver, ASPreferredItemControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <ASPreferredItemControllerDelegate> _delegate;
    NSMapTable *_mapTable;
}

@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
@property(nonatomic) __weak id <ASPreferredItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_getItemForCategory:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)cleanup;
- (void)flushCache;
- (id)preferredItemForCategory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

