#pragma once

#include <cstdint>
namespace supq::roblox {

    namespace version {
        inline constexpr char client[] = "0.747.0.7471481";
        inline constexpr char hash[] = "version-4ea8e85481e34f46";
    }
    namespace rva {
        inline constexpr std::uintptr_t print = 0x1CD77F0;
        inline constexpr std::uintptr_t luau_execute = 0x26A91B0;
        inline constexpr std::uintptr_t luad_throw = 0x266A470;
        inline constexpr std::uintptr_t luavm_load = 0x42C8020;
        inline constexpr std::uintptr_t get_lua_state = 0x42D3B20;
        inline constexpr std::uintptr_t get_capabilities = 0x1D18C30;
        inline constexpr std::uintptr_t script_context_resume = 0x4379900;
        inline constexpr std::uintptr_t push_instance = 0x42B6E70;
        inline constexpr std::uintptr_t cast_args = 0x4227040;

        inline constexpr std::uintptr_t waiting_hybrid_scripts_vftable = 0x72714A0;
        inline constexpr std::size_t waiting_hybrid_scripts_step = 8;

        inline constexpr std::uintptr_t fire_touch_interest = 0x14B6AE0;
        inline constexpr std::uintptr_t fire_proximity_prompt = 0x30FD840;
        inline constexpr std::uintptr_t connection_disconnect = 0x4AF09E0;
        inline constexpr std::uintptr_t connection_free = 0x4AF1D40;

        inline constexpr std::uintptr_t opcode_table = 0x7419400;
        inline constexpr std::uint8_t opcode_stride = 227;
        inline constexpr std::uintptr_t nilobject = 0x69919C8;
        inline constexpr std::uintptr_t dummynode = 0x69767A8;
        inline constexpr std::uintptr_t ktable = 0x85FEA80;

        inline constexpr std::uintptr_t fake_datamodel = 0x8EB6960;
        inline constexpr std::uintptr_t task_scheduler = 0x8F1E408;

        inline constexpr std::uintptr_t task_scheduler_target_fps = 0x8244258;
        inline constexpr std::uintptr_t fflag_registry = 0x865E868;
        inline constexpr std::uintptr_t identity_tls = 0x862AC48;
        inline constexpr std::uintptr_t tls_slot_get = 0xC700;
    }

    namespace field {

        namespace instance {
            inline constexpr std::uintptr_t class_descriptor = 0x18;
            inline constexpr std::uintptr_t parent = 0x60;
            inline constexpr std::uintptr_t name = 0x68;
            inline constexpr std::uintptr_t children = 0x70;
        }

        namespace class_descriptor {
            inline constexpr std::uintptr_t name = 0x08;
            inline constexpr std::uintptr_t property_entries = 0x1F0;
            inline constexpr std::uintptr_t property_mask = 0x1F8;
            inline constexpr std::uintptr_t property_entry_size = 0x10;
        }

        namespace property_descriptor {
            inline constexpr std::uintptr_t name = 0x08;
            inline constexpr std::uintptr_t callback = 0x88;
            inline constexpr std::uintptr_t usage_index = 0x44;
            inline constexpr std::uintptr_t flags = 0xAC;
            inline constexpr std::uintptr_t getset = 0xB0;
            inline constexpr std::uintptr_t getset_get = 0x18;
            inline constexpr std::uint32_t scriptable = 0x10;
        }

        namespace shared_string {
            inline constexpr std::uintptr_t data = 0x10;
            inline constexpr std::uintptr_t refs = 0x38;
        }

        namespace connection {
            inline constexpr std::uintptr_t strong = 0x00;
            inline constexpr std::uintptr_t weak = 0x04;
            inline constexpr std::uintptr_t next = 0x10;
            inline constexpr std::uintptr_t signal = 0x20;
        }

        namespace signal {
            inline constexpr std::uintptr_t head = 0x08;
        }

        namespace script_slot {
            inline constexpr std::uintptr_t once = 0xB5;
            inline constexpr std::uintptr_t wait_ref = 0x28;
        }

        namespace render_steps {
            inline constexpr std::uintptr_t map = 0x110;
            inline constexpr std::uintptr_t node_parent = 0x08;
            inline constexpr std::uintptr_t node_left = 0x00;
            inline constexpr std::uintptr_t node_right = 0x10;
            inline constexpr std::uintptr_t node_nil = 0x19;
            inline constexpr std::uintptr_t node_priority = 0x20;
            inline constexpr std::uintptr_t node_bindings = 0x28;
            inline constexpr std::uintptr_t binding_size = 0x50;
            inline constexpr std::uintptr_t binding_function = 0x20;
        }

        namespace fflag_map {
            inline constexpr std::uintptr_t end = 0x08;
            inline constexpr std::uintptr_t buckets = 0x18;
            inline constexpr std::uintptr_t mask = 0x30;
            inline constexpr std::uintptr_t node_prev = 0x08;
            inline constexpr std::uintptr_t node_key = 0x10;
            inline constexpr std::uintptr_t node_value = 0x30;
            inline constexpr std::uintptr_t get_string = 12;
            inline constexpr std::uintptr_t set_string = 4;
            inline constexpr int any_source = 127;
        }

        namespace weak_ref {
            inline constexpr std::uintptr_t node = 0x10;
        }

        namespace live_ref {
            inline constexpr std::uintptr_t thread = 0x28;
            inline constexpr std::uintptr_t ref = 0x34;
        }

        namespace event {
            inline constexpr std::uintptr_t descriptor = 0x00;
            inline constexpr std::uintptr_t owner = 0x18;
        }

        namespace event_descriptor {
            inline constexpr std::uintptr_t name = 0x08;
            inline constexpr std::uintptr_t owner = 0x30;
            inline constexpr std::uintptr_t parameters = 0x60;
            inline constexpr std::uintptr_t parameter_size = 0x70;
            inline constexpr std::uintptr_t parameter_name = 0x00;
            inline constexpr std::uintptr_t parameter_type = 0x08;
        }

        namespace reflected_type {
            inline constexpr std::uintptr_t name = 0x08;
        }

        namespace instance_vtable {
            inline constexpr std::uintptr_t raise_event = 0x18;
        }

        namespace datamodel {
            inline constexpr std::uintptr_t place_id = 0x1A0;
            inline constexpr std::uintptr_t game_loaded = 0x588;
            inline constexpr std::uintptr_t script_context_child = 0x440;
        }

        namespace fake_datamodel {
            inline constexpr std::uintptr_t real = 0x1F8;
        }

        namespace script_context {
            inline constexpr std::uintptr_t lua_state = 0x3C0;
            inline constexpr std::uintptr_t resume = 0xA28;
            inline constexpr std::uintptr_t require_bypass = 0xC30;
        }

        namespace scheduler {
            inline constexpr std::uintptr_t jobs_start = 0xC8;
            inline constexpr std::uintptr_t jobs_end = 0xD0;
        }

        namespace job {
            inline constexpr std::uintptr_t name = 0x18;
            inline constexpr std::uintptr_t type_name = 0xF8;
            inline constexpr std::uintptr_t script_context = 0x1C0;
        }

        namespace basepart {
            inline constexpr std::uintptr_t primitive = 0x178;
        }

        namespace script {
            inline constexpr std::uintptr_t local_bytecode = 0x178;
            inline constexpr std::uintptr_t module_bytecode = 0x120;
        }
    }

    namespace network {
        inline constexpr std::uintptr_t peer_vtable = 0x70E84B8;
        inline constexpr std::size_t peer_vtable_size = 0x3E0;
        inline constexpr std::size_t peer_send_slot = 20;
        inline constexpr std::uintptr_t send_job_peer = 0x1E0;
        inline constexpr std::uintptr_t stream_vtable = 0x70D0430;
        inline constexpr std::size_t address_size = 0x30;
        inline constexpr std::uintptr_t transport_flag = 0x8189A60;

        inline constexpr std::uintptr_t transport_client_vtable = 0x714D5B0;
        inline constexpr std::uintptr_t transport_app_vtable = 0x70DB908;
        inline constexpr std::size_t transport_app_slots = 29;
        inline constexpr std::size_t app_destroy_slot = 0;
        inline constexpr std::size_t app_send_slot = 10;
        inline constexpr std::size_t app_receive_slot = 13;
        inline constexpr std::size_t app_receive_max_slot = 14;

        inline constexpr std::uintptr_t channel_config = 0x3B02650;
        inline constexpr std::uintptr_t stream_create = 0x53E7E60;
        inline constexpr std::uintptr_t stream_copy = 0x53E8330;
        inline constexpr std::uintptr_t stream_append = 0x215D0D0;
        inline constexpr std::uintptr_t stream_destroy = 0x211D570;

        inline constexpr std::uintptr_t client_replicator = 0xFA8;
        inline constexpr std::uintptr_t replicator_connection = 0x110;
        inline constexpr std::uintptr_t client_connection = 0xFB0;
        inline constexpr std::uintptr_t client_channel_mask = 0xA30;
        inline constexpr std::uintptr_t client_app = 0xA40;

        inline constexpr std::size_t stream_size = 0x58;
        inline constexpr std::size_t received_stream_size = 0x70;
        inline constexpr std::uintptr_t stream_begin = 0x0;
        inline constexpr std::uintptr_t stream_end = 0x8;
        inline constexpr std::uintptr_t stream_pool_bytes = 0x18;
        inline constexpr std::uintptr_t stream_pool_length = 0x20;
        inline constexpr std::uintptr_t stream_pooled = 0x38;
        inline constexpr std::uintptr_t stream_prefix = 0x40;
        inline constexpr std::uint32_t channel_count = 14;
    }
}