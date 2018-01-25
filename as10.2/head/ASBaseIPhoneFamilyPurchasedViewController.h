//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIMessageBannerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SKUIMessageBanner, SSFamilyMember, UIColor, UITableView;

@interface ASBaseIPhoneFamilyPurchasedViewController : SKUIViewController <SKUIMessageBannerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIColor *_borderColor;
    UITableView *_tableView;
    long long _familyAlertReason;
    SKUIMessageBanner *_messageBanner;
    SSFamilyMember *_activeFamilyMember;
    NSArray *_otherFamilyMembers;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) NSArray *otherFamilyMembers; // @synthesize otherFamilyMembers=_otherFamilyMembers;
- (void).cxx_destruct;
- (id)_tableView;
- (void)_reloadTableView;
- (void)_reloadData;
- (id)_newPurchasedViewController;
- (void)_familyCircleProfilePictureDidChange:(id)arg1;
- (void)_familyCircleDidChange:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)askPermissionBannerDidClear:(id)arg1;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

